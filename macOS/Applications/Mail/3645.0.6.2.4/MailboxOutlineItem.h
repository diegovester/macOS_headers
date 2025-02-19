//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FavoriteMailboxDatum, MFMailAccount, MFMailbox, NSColor, NSImage, NSString;
@protocol MFUIMailbox;

@interface MailboxOutlineItem : NSObject
{
    BOOL _shouldShowBadge;
    BOOL _shouldShowAddButton;
    BOOL _isMailbox;
    BOOL _isAccount;
    BOOL _isFavoriteMailboxDatum;
    BOOL _isMailboxOrFavorite;
    BOOL _isSectionHeader;
    BOOL _isSearchSection;
    BOOL _isMailboxesSection;
    BOOL _isSmartMailboxesSection;
    BOOL _isFavoritesSection;
    BOOL _isPadding;
    id <MFUIMailbox> _uiMailbox;
    long long _type;
    MailboxOutlineItem *_parentItem;
    MFMailAccount *_account;
    FavoriteMailboxDatum *_favoriteMailboxDatum;
    NSString *_sectionID;
    NSString *_localizedSectionTitle;
    NSString *_persistentObject;
}

+ (id)_mailboxForIconForMailbox:(id)arg1;
+ (id)localizedTitleForSection:(id)arg1;
+ (id)padding;
+ (id)smartMailboxesSection;
+ (id)mailboxesSection;
+ (id)favoritesSection;
+ (id)searchSection;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *persistentObject; // @synthesize persistentObject=_persistentObject;
@property(readonly, copy, nonatomic) NSString *localizedSectionTitle; // @synthesize localizedSectionTitle=_localizedSectionTitle;
@property(readonly, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, nonatomic) BOOL isPadding; // @synthesize isPadding=_isPadding;
@property(readonly, nonatomic) BOOL isFavoritesSection; // @synthesize isFavoritesSection=_isFavoritesSection;
@property(readonly, nonatomic) BOOL isSmartMailboxesSection; // @synthesize isSmartMailboxesSection=_isSmartMailboxesSection;
@property(readonly, nonatomic) BOOL isMailboxesSection; // @synthesize isMailboxesSection=_isMailboxesSection;
@property(readonly, nonatomic) BOOL isSearchSection; // @synthesize isSearchSection=_isSearchSection;
@property(readonly, nonatomic) BOOL isSectionHeader; // @synthesize isSectionHeader=_isSectionHeader;
@property(readonly, nonatomic) BOOL isMailboxOrFavorite; // @synthesize isMailboxOrFavorite=_isMailboxOrFavorite;
@property(readonly, nonatomic) BOOL isFavoriteMailboxDatum; // @synthesize isFavoriteMailboxDatum=_isFavoriteMailboxDatum;
@property(readonly, nonatomic) FavoriteMailboxDatum *favoriteMailboxDatum; // @synthesize favoriteMailboxDatum=_favoriteMailboxDatum;
@property(readonly, nonatomic) BOOL isAccount; // @synthesize isAccount=_isAccount;
@property(readonly, nonatomic) MFMailAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) BOOL isMailbox; // @synthesize isMailbox=_isMailbox;
@property(retain, nonatomic) MailboxOutlineItem *parentItem; // @synthesize parentItem=_parentItem;
@property(readonly, nonatomic) BOOL shouldShowAddButton; // @synthesize shouldShowAddButton=_shouldShowAddButton;
@property(readonly, nonatomic) BOOL shouldShowBadge; // @synthesize shouldShowBadge=_shouldShowBadge;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)_descriptionForType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) MFMailbox *mailbox;
- (id)_mailboxIfNotPlaceholderForMailbox:(id)arg1;
@property(readonly, nonatomic) id <MFUIMailbox> uiMailbox; // @synthesize uiMailbox=_uiMailbox;
- (id)_mailboxForIcon;
@property(readonly, nonatomic) NSColor *contentTintColorForMailbox;
@property(readonly, nonatomic) NSImage *iconForMailbox;
- (id)initAsPadding;
- (id)initWithSection:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithFavoriteMailboxDatum:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

