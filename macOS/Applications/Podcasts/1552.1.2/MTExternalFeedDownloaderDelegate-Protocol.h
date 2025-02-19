//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSURL, NSURLSessionTask;

@protocol MTExternalFeedDownloaderDelegate <NSObject>
- (void)performOnFeedProcessingQueue:(void (^)(void))arg1;
- (void)didRestoreFeedUrlTask:(NSURL *)arg1;
- (void)didDownloadFeedWithError:(NSError *)arg1 data:(NSData *)arg2 task:(NSURLSessionTask *)arg3 requestedUrl:(NSURL *)arg4 useBackgroundFetch:(BOOL)arg5;
@end

