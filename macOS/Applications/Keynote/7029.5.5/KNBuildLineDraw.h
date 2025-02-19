//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNAnimationPluginParameterizedStrokes-Protocol.h"
#import "KNBuildMetalAnimator-Protocol.h"
#import "KNBuildOpenGLAnimator-Protocol.h"

@class KNAnimParameterGroup, NSArray, NSMapTable, NSMutableArray, NSString, TSDGLFrameBuffer, TSDGLMotionBlurEffect, TSDGLShader, TSDMetalMotionBlurEffect, TSDMetalRenderTarget, TSDMetalShader, TSDTexturedRectangle, TSUBezierPath;
@protocol TSDGLDataBuffer, TSDMTLDataBuffer;

@interface KNBuildLineDraw : KNAnimationEffect <KNBuildOpenGLAnimator, KNBuildMetalAnimator, KNAnimationPluginArchiving, KNAnimationPluginParameterizedStrokes>
{
    KNAnimParameterGroup *_parameterGroup;
    NSMapTable *_objectToMVPMatrixMap;
    NSArray *_objectTRs;
    NSArray *_strokeTRs;
    TSDTexturedRectangle *_lineEndHead;
    TSDTexturedRectangle *_lineEndTail;
    NSArray *_parameterizedStrokeTRs;
    TSDGLShader *_objectShader;
    TSDGLShader *_strokeShader;
    TSDGLShader *_lineEndShader;
    NSArray *_strokeDataBuffers;
    id <TSDGLDataBuffer> _lineEndHeadBuffer;
    id <TSDGLDataBuffer> _lineEndTailBuffer;
    NSMapTable *_objectToDataBufferMap;
    NSMutableArray *_parameterizedStrokeFrameBuffers;
    TSDGLFrameBuffer *_combinedFramebuffer;
    id <TSDGLDataBuffer> _combinedDataBuffer;
    TSDGLMotionBlurEffect *_motionBlurEffect;
    TSDMetalShader *_objectMetalShader;
    TSDMetalShader *_strokeMetalShader;
    TSDMetalShader *_staticStrokeMetalShader;
    TSDMetalShader *_strokeExpanderShader;
    TSDMetalShader *_combineMetalShader;
    struct {
        float MinPercent;
        float MaxPercent;
        float EdgeSharpness;
    } _fragmentUniforms;
    // Error parsing type: {?="MVPMatrix"{?="columns"[4]}}, name: _vertexUniforms
    NSMutableArray *_strokeMetalDataBuffers;
    id <TSDMTLDataBuffer> _lineEndHeadMetalBuffer;
    id <TSDMTLDataBuffer> _lineEndTailMetalBuffer;
    NSMapTable *_objectToMetalDataBufferMap;
    TSDMetalRenderTarget *_renderTarget;
    id <TSDMTLDataBuffer> _combinedMetalDataBuffer;
    NSMutableArray *_parameterizedStrokeFrameTextures;
    TSDMetalMotionBlurEffect *_metalMotionBlurEffect;
    struct CATransform3D _combinedMVPMatrix;
    struct CATransform3D _combinedMotionBlurMVPMatrix;
    TSUBezierPath *_flattenedPath;
    BOOL _endPtForHeadIsValid;
    struct CGPoint _endPtForHead;
    double _endPtForHeadAngle;
    BOOL _endPtForTailIsValid;
    struct CGPoint _endPtForTail;
    double _endPtForTailAngle;
    BOOL _isPathClockwiseIsValid;
    BOOL _isPathClockwise;
    struct CGRect _drawableFrame;
    struct CGRect _animationRect;
    BOOL _drawStrokesAsObjects;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 oldAnimationName:(id)arg3 warning:(id *)arg4 type:(long long)arg5 isFromClassic:(BOOL)arg6 version:(unsigned long long)arg7;
+ (BOOL)wantsSeparateGroupedTextures;
+ (BOOL)wantsParameterizedStrokeDrawingReversedWithAnimatedBuild:(id)arg1;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (BOOL)requiresSingleTexturePerStage;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
- (void).cxx_destruct;
- (void)metalTeardownAnimationsWithContext:(id)arg1;
- (void)metalAnimationDidEndWithContext:(id)arg1;
- (void)metalRenderFrameWithContext:(id)arg1;
- (void)drawObjectTexture:(id)arg1 percent:(double)arg2 encoder:(id)arg3 shader:(id)arg4;
- (void)drawStroke:(id)arg1 attributes:(CDStruct_65a78398)arg2 index:(unsigned long long)arg3 encoder:(id)arg4;
- (void)drawLineEnd:(id)arg1 dataBuffer:(id)arg2 offsetAlongPath:(double)arg3 popPercent:(double)arg4 scale:(double)arg5 prevOffsetAlongPath:(double)arg6 prevPopPercent:(double)arg7 prevScale:(double)arg8 isMotionBlurred:(BOOL)arg9 encoder:(id)arg10;
- (void)drawLineEndsWithStrokeAttributes:(CDStruct_65a78398)arg1 previousStrokeAttributes:(CDStruct_65a78398)arg2 context:(id)arg3 isMotionBlurPass:(BOOL)arg4 encoder:(id)arg5;
- (void)metalAnimationWillBeginWithContext:(id)arg1;
- (void)metalPrepareAnimationWithContext:(id)arg1;
- (void)p_setupMetalShadersWithContext:(id)arg1 device:(id)arg2;
- (void)setupParameterizedStrokeTexturesWithContext:(id)arg1 dataBuffer:(id)arg2 parameterizedStroke:(id)arg3 commandBuffer:(id)arg4;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)drawObjectTexture:(id)arg1 percent:(double)arg2;
- (void)drawStroke:(id)arg1 attributes:(CDStruct_65a78398)arg2 index:(unsigned long long)arg3;
- (void)drawLineEnd:(id)arg1 dataBuffer:(id)arg2 offsetAlongPath:(double)arg3 popPercent:(double)arg4 scale:(double)arg5 prevOffsetAlongPath:(double)arg6 prevPopPercent:(double)arg7 prevScale:(double)arg8 isMotionBlurred:(BOOL)arg9;
- (void)drawLineEndsWithStrokeAttributes:(CDStruct_65a78398)arg1 previousStrokeAttributes:(CDStruct_65a78398)arg2 context:(id)arg3 isMotionBlurPass:(BOOL)arg4;
- (CDStruct_65a78398)strokeAttributesAtPercent:(double)arg1 duration:(double)arg2 shouldPop:(BOOL)arg3 direction:(unsigned long long)arg4 mediaTimingFunction:(id)arg5;
- (struct CATransform3D)transformForLineEnd:(id)arg1 offsetAlongPath:(double)arg2 scale:(double)arg3 popPercent:(double)arg4 flipOrtho:(BOOL)arg5 adjustTransform:(BOOL)arg6 frameRect:(struct CGRect)arg7;
- (double)popScaleForPercent:(double)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_setupFlattenedPath;
- (void)p_setupTRsWithContext:(id)arg1;
- (void)setupParameterizedStrokeFrameBufferWithGLState:(id)arg1 dataBuffer:(id)arg2 paramterizedStroke:(id)arg3;
- (void)p_setupShadersWithContext:(id)arg1;
- (void)p_mapMVPMatrixToObjectWithBaseTransform:(struct CATransform3D)arg1 rect:(id)arg2;
- (struct CGRect)frameOfEffectWithContext:(id)arg1;
- (void)teardown;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL disallowsMetalAnimationWillBeginWhenPreparing;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

