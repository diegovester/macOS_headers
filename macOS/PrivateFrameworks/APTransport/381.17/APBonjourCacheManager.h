//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUCoalescer, CUSystemMonitor, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APBonjourCacheManager : NSObject
{
    BOOL _cacheChanged;
    struct NSMutableDictionary *_cachedItems;
    NSMutableSet *_removedItems;
    struct NSMutableDictionary *_deviceMap;
    int _pairedPeersChangedToken;
    BOOL _pairedPeersGetting;
    struct NSMutableDictionary *_pairedPeersMap;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_networkSignature;
    double _networkSignatureWasValidAt;
    CUCoalescer *_writeCoaleser;
    CUSystemMonitor *_systemMonitor;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _reportDeviceFoundHandler;
    CDUnknownBlockType _reportDeviceLostHandler;
    NSString *_serviceType;
}

@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) CDUnknownBlockType reportDeviceLostHandler; // @synthesize reportDeviceLostHandler=_reportDeviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType reportDeviceFoundHandler; // @synthesize reportDeviceFoundHandler=_reportDeviceFoundHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (BOOL)_writeCachedItems:(id)arg1;
- (id)_readCachedItems;
- (void)_flushCachedItems;
- (void)_addDeviceToCache:(id)arg1 pairedPeerInfo:(id)arg2 event:(long long)arg3;
- (void)_updateCachedDeviceInfoWhenRealDeviceIsFound:(id)arg1 event:(long long)arg2;
- (void)_updateLastSeenTimestamp:(id)arg1;
- (void)_reportCachedItemsLost:(long long)arg1;
- (void)_reportCachedItemsFound:(long long)arg1;
- (void)_refreshCachedItems;
- (void)_recheckDevices:(long long)arg1;
- (void)forceReportCachedDevices;
- (void)_cancelRetryGetPairedPeers;
- (void)_startRetryGetPairedPeersTimer;
- (void)_pairedPeersChanged;
- (void)_networkSignatureChanged;
- (void)_sanitizeDNSStrings:(id)arg1;
- (void)_replaceIfnameFromDNSString:(id)arg1;
- (void)_removeDuplicateCachedItemsForDiscoveryID:(unsigned long long)arg1 realIdentifier:(id)arg2;
- (void)_refreshOrRemoveCachedItem:(id)arg1;
- (void)cacheHKPeerIfNeeded:(id)arg1 pairedPeerInfo:(id)arg2;
- (BOOL)deviceLost:(id)arg1;
- (void)_deviceFound:(id)arg1 altPairedInfo:(id)arg2 recheck:(BOOL)arg3 event:(long long)arg4;
- (void)deviceFound:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

