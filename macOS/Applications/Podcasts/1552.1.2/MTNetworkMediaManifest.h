//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTItemListManifest.h"

@class NSArray;

@interface MTNetworkMediaManifest : MTItemListManifest
{
    // Error parsing type: , name: forwardItemCount
    // Error parsing type: , name: episodeFetchLimit
    // Error parsing type: , name: manifestWorkQueue
    // Error parsing type: , name: mediaRequestController
    // Error parsing type: , name: initialIds
    // Error parsing type: , name: contentType
    // Error parsing type: , name: refreshInProgress
    // Error parsing type: , name: inProgressRefreshHandlers
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithItems:(id)arg1;
@property(nonatomic, readonly) NSArray *itemIdsDebug;
@property(nonatomic) unsigned long long currentIndex;
- (BOOL)parsePodcastAssetInfo:(id)arg1 error:(id *)arg2;
- (BOOL)parseStationAssetInfo:(id)arg1 error:(id *)arg2;
- (void)load:(CDUnknownBlockType)arg1;
- (id)initWithStationId:(id)arg1 assetInfo:(id)arg2;
- (id)initWithPodcastAdamId:(id)arg1 assetInfo:(id)arg2;
- (id)initWithEpisodeAdamIds:(id)arg1 assetInfo:(id)arg2;
- (id)initWithEpisodeAdamId:(id)arg1 assetInfo:(id)arg2;
- (id)initWithAssetInfo:(id)arg1;
@property(nonatomic) long long episodeFetchLimit; // @synthesize episodeFetchLimit;
@property(nonatomic) long long forwardItemCount; // @synthesize forwardItemCount;

@end

