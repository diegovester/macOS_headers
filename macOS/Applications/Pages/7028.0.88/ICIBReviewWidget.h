//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICIBWidget.h"

#import "ICIBSidecarPageFileWriter-Protocol.h"

@class GQDIBAReviewWidget, NSString;

@interface ICIBReviewWidget : ICIBWidget <ICIBSidecarPageFileWriter>
{
    GQDIBAReviewWidget *_qdReviewWidget;
}

+ (void)mapReviewWidgetInThumbnailInfo:(id)arg1 state:(id)arg2;
+ (id)shapeInfoForThumbnailedImage:(id)arg1 reviewWidget:(id)arg2 state:(id)arg3;
+ (void)map:(id)arg1 state:(id)arg2;
+ (void)fixBoundsForReviewWidget:(id)arg1 state:(id)arg2;
+ (void)makeRect:(struct CGRect *)arg1 relativeToRect:(struct CGRect)arg2;
+ (void)offsetImage:(id)arg1 by:(struct CGPoint)arg2;
+ (void)mapQuestion:(id)arg1 reviewWidgetStyle:(id)arg2 group:(id)arg3 state:(id)arg4;
+ (void)mapAnswer:(id)arg1 question:(id)arg2 group:(id)arg3 state:(id)arg4;
+ (void)fixAutosizedTextBox:(id)arg1;
+ (id)correctAnswerImageWithBounds:(struct CGRect)arg1 state:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GQDIBAReviewWidget *qdReviewWidget; // @synthesize qdReviewWidget=_qdReviewWidget;
- (id)nameForReflowableLayoutWithWidgetNumber:(long long)arg1;
- (id)nameForFixedLayoutWithPageNumber:(unsigned long long)arg1 widgetNumber:(long long)arg2;
- (void)write:(id)arg1 originalPageSize:(struct CGSize)arg2 ibaState:(id)arg3 writeCompletionBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

