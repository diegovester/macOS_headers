//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, TSUImage;
@protocol TSDThumbnailIdentifier;

@protocol TSDThumbnailControllerDelegate <NSObject>
@property(readonly) NSArray *principalThumbnailIdentifiers;
- (void)thumbnail:(TSUImage *)arg1 didChange:(id <TSDThumbnailIdentifier>)arg2;

@optional
- (void)thumbnailingDidResume;
- (void)thumbnailingWillSuspend;
- (void)thumbnailCountDidChange;
- (void)commitThumbnail:(TSUImage *)arg1 identifier:(id <TSDThumbnailIdentifier>)arg2 datasThatNeedDownload:(NSSet *)arg3;
@end

