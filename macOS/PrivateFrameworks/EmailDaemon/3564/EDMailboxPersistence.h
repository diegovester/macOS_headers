//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMailboxProviderDelegate-Protocol.h>
#import <EmailDaemon/EMMailboxTypeResolver-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol EDMailboxProvider;

@interface EDMailboxPersistence : NSObject <EDMailboxProviderDelegate, EMMailboxTypeResolver>
{
    struct os_unfair_lock_s _changeObserversByIdentifierLock;
    NSMutableDictionary *_changeObserversByIdentifier;
    id <EDMailboxProvider> _mailboxProvider;
}

@property(retain, nonatomic) id <EDMailboxProvider> mailboxProvider; // @synthesize mailboxProvider=_mailboxProvider;
@property(retain, nonatomic) NSMutableDictionary *changeObserversByIdentifier; // @synthesize changeObserversByIdentifier=_changeObserversByIdentifier;
- (void).cxx_destruct;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2;
- (BOOL)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2;
- (BOOL)deleteMailbox:(id)arg1;
- (BOOL)createMailbox:(id)arg1 parentMailboxID:(id)arg2;
- (void)removeChangeObserverWithIdentifier:(id)arg1;
- (void)addChangeObserver:(id)arg1 withIdentifier:(id)arg2;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (void)serverCountsForMailboxScope:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1;
- (id)legacyMailboxForMailboxURL:(id)arg1;
- (void)fetchMailboxLists;
- (id)userCreatedMailboxObjectIDs;
- (void)allMailboxesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mailboxListInvalidated;
- (id)allMailboxes;
- (id)initWithMailboxProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

