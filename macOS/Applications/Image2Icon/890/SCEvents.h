//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, SCEvent;

@interface SCEvents : NSObject
{
    id <NSObject><SCEventListenerProtocol> _delegate;
    BOOL _isWatchingPaths;
    BOOL _ignoreEventsFromSubDirs;
    struct __CFRunLoop *_runLoop;
    struct __FSEventStream *_eventStream;
    double _notificationLatency;
    unsigned long long _resumeFromEventId;
    SCEvent *_lastEvent;
    NSArray *_watchedPaths;
    NSArray *_excludedPaths;
    NSObject<OS_dispatch_queue> *_eventsQueue;
}

- (void).cxx_destruct;
@property(getter=resumeFromEventId, setter=setResumeFromEventId:) unsigned long long _resumeFromEventId; // @synthesize _resumeFromEventId;
@property(retain, getter=excludedPaths, setter=setExcludedPaths:) NSArray *_excludedPaths; // @synthesize _excludedPaths;
@property(retain, getter=watchedPaths, setter=setWatchedPaths:) NSArray *_watchedPaths; // @synthesize _watchedPaths;
@property(getter=notificationLatency, setter=setNotificationLatency:) double _notificationLatency; // @synthesize _notificationLatency;
@property(retain, getter=lastEvent, setter=setLastEvent:) SCEvent *_lastEvent; // @synthesize _lastEvent;
@property(getter=ignoreEventsFromSubDirs, setter=setIgnoreEventsFromSubDirs:) BOOL _ignoreEventsFromSubDirs; // @synthesize _ignoreEventsFromSubDirs;
@property(readonly, getter=isWatchingPaths) BOOL _isWatchingPaths; // @synthesize _isWatchingPaths;
@property(getter=delegate, setter=setDelegate:) id <NSObject><SCEventListenerProtocol> _delegate; // @synthesize _delegate;
- (void)dealloc;
- (void)_finalize;
- (id)description;
- (id)streamDescription;
- (BOOL)stopWatchingPaths;
- (BOOL)startWatchingPaths:(id)arg1 onRunLoop:(id)arg2;
- (BOOL)startWatchingPaths:(id)arg1;
- (BOOL)flushEventStreamAsync;
- (BOOL)flushEventStreamSync;
- (id)init;

@end

