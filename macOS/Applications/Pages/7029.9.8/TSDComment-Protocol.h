//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSDAnnotation-Protocol.h"

@class NSString, TSDCommentStorage, TSKAnnotationAuthor, TSKCommand;
@protocol TSDAnnotationChangingCommand, TSDCommentCommand;

@protocol TSDComment <TSDAnnotation>
@property(readonly, nonatomic) BOOL isHighlight;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (TSKCommand<TSDAnnotationChangingCommand> *)commandForUpgradingToACommentForAuthor:(TSKAnnotationAuthor *)arg1;
- (TSKCommand *)commandForDeletingComment;
- (TSKCommand<TSDCommentCommand> *)commandWithVariant:(unsigned long long)arg1 reply:(TSDCommentStorage *)arg2;
- (TSKCommand<TSDAnnotationChangingCommand> *)commandForChangingCommentText:(NSString *)arg1;
- (TSKCommand<TSDAnnotationChangingCommand> *)commandForInsertingWithCommentText:(NSString *)arg1;
- (void)commentWillBeAddedToDocumentRoot;
@end

