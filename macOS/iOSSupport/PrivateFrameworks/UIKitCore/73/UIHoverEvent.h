//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface UIHoverEvent : UIEvent
{
    NSMapTable *_touchesByContextId;
    NSMapTable *_deliveryTableByTouch;
    BOOL _hasOutstandingUpdates;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasOutstandingUpdates; // @synthesize hasOutstandingUpdates=_hasOutstandingUpdates;
- (void)_pointerStateDidChange:(id)arg1;
- (void)_cancelAllGestureRecognizers;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)arg1;
- (id)_touchesByContextId:(unsigned int)arg1 createIfNeeded:(BOOL)arg2;
- (void)_windowDidDetachContext:(id)arg1;
- (void)removeHoverTouchForContextId:(unsigned int)arg1 pathIndex:(long long)arg2;
- (void)setHoverTouch:(id)arg1 forContextId:(unsigned int)arg2 pathIndex:(long long)arg3;
- (id)hoverTouchForContextId:(unsigned int)arg1 pathIndex:(long long)arg2;
- (void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)setNeedsHitTestReset;
- (void)setNeedsHitTestResetForWindow:(id)arg1;
- (void)setNeedsUpdateForWindow:(id)arg1;
- (void)_setNeedsUpdateForWindow:(id)arg1 forcingHitTest:(BOOL)arg2;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;
- (BOOL)_sendEventToGestureRecognizer:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_windows;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (id)allTouches;
- (long long)subtype;
- (long long)type;
- (void)dealloc;
- (id)_init;

@end

