//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "iTermMetalCellRenderer-Protocol.h"

@class NSString, iTermMetalBufferPool, iTermMetalCellRenderer;

@interface iTermCursorRenderer : NSObject <iTermMetalCellRenderer>
{
    iTermMetalCellRenderer *_cellRenderer;
    iTermMetalBufferPool *_descriptionPool;
}

+ (id)newFrameCursorRendererWithDevice:(id)arg1;
+ (id)newKeyCursorRendererWithDevice:(id)arg1;
+ (id)newCopyModeCursorRendererWithDevice:(id)arg1;
+ (id)newBlockCursorRendererWithDevice:(id)arg1;
+ (id)newIMECursorRendererWithDevice:(id)arg1;
+ (id)newBarCursorRendererWithDevice:(id)arg1;
+ (id)newUnderlineCursorRendererWithDevice:(id)arg1;
@property(readonly, nonatomic) iTermMetalCellRenderer *cellRenderer; // @synthesize cellRenderer=_cellRenderer;
- (void).cxx_destruct;
- (void)drawWithFrameData:(id)arg1 transientState:(id)arg2;
- (void)initializeTransientState:(id)arg1;
- (id)createTransientStateForCellConfiguration:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (Class)transientStateClass;
- (int)createTransientStateStat;
@property(readonly, nonatomic) BOOL rendererDisabled;
- (id)initWithDevice:(id)arg1 vertexFunctionName:(id)arg2 fragmentFunctionName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

