//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CGLLayerGlyph;

@interface CGLLayer : NSObject
{
    struct CGAffineTransform _transform;
    struct CGPath *_cgPathPreTransform;
    BOOL _isTransparent;
    const struct CGPath *_cgPath;
    CGLLayerGlyph *_parentGlyph;
}

+ (BOOL)_pointsAreClockwise:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak CGLLayerGlyph *parentGlyph; // @synthesize parentGlyph=_parentGlyph;
@property(nonatomic) BOOL isTransparent; // @synthesize isTransparent=_isTransparent;
@property(readonly) const struct CGPath *cgPath; // @synthesize cgPath=_cgPath;
- (struct CGSVGPath *)svgPathCopy;
- (id)debugQuickLookObject;
- (id)createPunchedCopyFromLayers:(id)arg1;
- (BOOL)boundingBoxIsSmallerThan:(id)arg1;
- (BOOL)containsLayer:(id)arg1;
- (BOOL)isFirstSubpathClockwise;
- (id)initWithGlyphName:(id)arg1 font:(id)arg2 transform:(id)arg3;
- (id)initWithCGPath:(struct CGPath *)arg1;
- (void)dealloc;
- (id)init;

@end

