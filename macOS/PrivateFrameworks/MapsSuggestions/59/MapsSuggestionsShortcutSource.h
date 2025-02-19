//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsMeCardObserver-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class MapsSuggestionsShortcutManager, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsShortcutSource : MapsSuggestionsBaseSource <MapsSuggestionsMeCardObserver, MapsSuggestionsSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsShortcutManager *_shortcutManager;
}

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;
@property(retain, nonatomic) MapsSuggestionsShortcutManager *shortcutManager; // @synthesize shortcutManager=_shortcutManager;
- (void).cxx_destruct;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (void)_updateSuggestionEntries;
- (void)_treatShortcuts:(struct NSArray *)arg1 error:(id)arg2;
- (id)initWithDelegate:(id)arg1 name:(struct NSString *)arg2;
- (void)_renameDuplicateMeCardTypes:(struct NSArray *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

