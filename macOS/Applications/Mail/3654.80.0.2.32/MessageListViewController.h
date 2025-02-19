//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MessageListColumnManagerDelegate-Protocol.h"
#import "MessageListFilterMenuHelperDelegate-Protocol.h"
#import "SortTitleSetter-Protocol.h"
#import "TableViewManagerDelegate-Protocol.h"

@class ClassicMenuHeaderController, MailTableView, MessageListFilterMenuHelper, MessageListLayoutViewController, MessageListSearchProgressView, MessageViewer, NSArray, NSButton, NSLayoutConstraint, NSMenu, NSString, RichMessageListHeaderView, TableViewManager;
@protocol MessageListFilterMenuHelperDelegate;

@interface MessageListViewController : NSViewController <MessageListFilterMenuHelperDelegate, MessageListColumnManagerDelegate, SortTitleSetter, TableViewManagerDelegate>
{
    NSArray *_selectedFilters;
    BOOL _isSearching;
    BOOL _primitiveFilterEnabled;
    BOOL _shouldShowSearchRadarButton;
    RichMessageListHeaderView *_searchHeaderView;
    NSButton *_sortButton;
    RichMessageListHeaderView *_topHitsHeaderView;
    MessageListSearchProgressView *_searchProgressView;
    MessageListFilterMenuHelper *_filterMenuHelper;
    MessageListLayoutViewController *_listLayoutViewController;
    NSLayoutConstraint *_sortBarTopAlignmentConstraint;
    NSLayoutConstraint *_viewWidthConstraint;
    ClassicMenuHeaderController *_headerMenuController;
    TableViewManager *_tableViewManager;
    MessageViewer *_messageViewer;
}

+ (id)keyPathsForValuesAffectingMailboxFilters;
+ (id)keyPathsForValuesAffectingFilterEnabled;
+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
@property(retain, nonatomic) TableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) ClassicMenuHeaderController *headerMenuController; // @synthesize headerMenuController=_headerMenuController;
@property(nonatomic) BOOL shouldShowSearchRadarButton; // @synthesize shouldShowSearchRadarButton=_shouldShowSearchRadarButton;
@property(nonatomic) __weak NSLayoutConstraint *viewWidthConstraint; // @synthesize viewWidthConstraint=_viewWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *sortBarTopAlignmentConstraint; // @synthesize sortBarTopAlignmentConstraint=_sortBarTopAlignmentConstraint;
@property(nonatomic) BOOL primitiveFilterEnabled; // @synthesize primitiveFilterEnabled=_primitiveFilterEnabled;
@property(nonatomic) __weak MessageListLayoutViewController *listLayoutViewController; // @synthesize listLayoutViewController=_listLayoutViewController;
@property(retain, nonatomic) MessageListFilterMenuHelper *filterMenuHelper; // @synthesize filterMenuHelper=_filterMenuHelper;
@property(retain, nonatomic) MessageListSearchProgressView *searchProgressView; // @synthesize searchProgressView=_searchProgressView;
@property(retain, nonatomic) RichMessageListHeaderView *topHitsHeaderView; // @synthesize topHitsHeaderView=_topHitsHeaderView;
@property(nonatomic) __weak NSButton *sortButton; // @synthesize sortButton=_sortButton;
@property(nonatomic) __weak RichMessageListHeaderView *searchHeaderView; // @synthesize searchHeaderView=_searchHeaderView;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
- (id)scrollTestScrollView;
- (struct CGRect)containerRectForMessageListColumnManager:(id)arg1;
- (BOOL)shouldIgnoreResizeEvents:(id)arg1;
- (id)searchProgressViewForTableViewManager:(id)arg1;
- (id)topHitsViewForTableViewManager:(id)arg1;
- (id)searchHeaderViewForTableViewManager:(id)arg1;
- (void)recordSearchEngagement;
- (id)accessibilityLinkTargetForTableViewManager:(id)arg1;
- (void)tableViewManagerNeedsUndoStackReset:(id)arg1 unconditionally:(BOOL)arg2;
- (void)tableViewManagerContentUpdated:(id)arg1;
- (void)tableViewManagerDidFinishSearch:(id)arg1;
- (void)tableViewManagerDidUpdateSearch:(id)arg1;
- (void)tableViewManagerWillBeginSearch:(id)arg1;
- (void)tableViewManager:(id)arg1 archiveMessages:(id)arg2 allowUndo:(BOOL)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)tableViewManager:(id)arg1 deleteMessages:(id)arg2 allowMoveToTrash:(BOOL)arg3 allowUndo:(BOOL)arg4 selectingNextMessage:(BOOL)arg5 withAnimationOptions:(unsigned long long)arg6;
- (id)currentReadMessage;
- (void)tableViewManagerRequestSelectionChange:(id)arg1;
- (void)tableViewManagerRequestSelectionOpen:(id)arg1;
- (void)tableViewManager:(id)arg1 didMarkMessagesAsUnread:(id)arg2;
- (void)tableViewManager:(id)arg1 didMarkMessagesAsRead:(id)arg2;
- (void)tableViewManagerDidChangeMessageSelection:(id)arg1;
- (void)tableViewManager:(id)arg1 showFollowupsToMessage:(id)arg2;
- (id)defaultMenuForTableViewHeader:(id)arg1;
- (void)messageListFilterMenuHelperDidChangeDelegate:(id)arg1;
- (void)messageListFilterMenuHelperDidChangeFilter:(id)arg1;
@property(readonly, nonatomic) __weak id <MessageListFilterMenuHelperDelegate> menuHelperDelegate;
@property(readonly, nonatomic) NSMenu *filterMenu;
- (void)keyDown:(id)arg1;
- (void)_viewerPreferencesChanged:(id)arg1;
- (void)_switchToMessageLayoutViewController:(id)arg1;
- (void)_showMessageListWithLayout:(unsigned long long)arg1 mailboxes:(id)arg2 mailboxColumType:(unsigned long long)arg3 hasMultipleMailboxes:(BOOL)arg4;
- (void)_setMessageListContentController:(id)arg1;
- (void)dismissController:(id)arg1;
- (void)viewDidLoad;
- (void)headerViewClicked:(id)arg1;
- (void)jumpToTop;
- (void)setAccessibilityLinkedUIElementForMessageList:(id)arg1;
- (id)selectedFilterStringWithCount:(unsigned long long)arg1 isDrafts:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSArray *mailboxFilters;
- (void)radarButtonClicked:(id)arg1;
- (id)_searchRadarDescription;
- (void)clearSearch;
- (void)searchForSuggestions:(id)arg1 withOptions:(long long)arg2 fromSuggestionsSearchField:(id)arg3;
- (void)_updateShouldShowSearchRadarButton;
- (void)reload;
@property(copy, nonatomic) NSArray *selectedFilters;
@property(nonatomic) BOOL filterEnabled;
- (id)_predicateForCurrentFilterSelection;
- (void)_restoreSettingsForMailbox:(id)arg1;
- (void)_saveSettingsForMailbox:(id)arg1;
@property(retain) NSArray *representedObject;
@property(copy, nonatomic) NSArray *selectedMessages;
@property(readonly, nonatomic) BOOL isSortedAscending;
@property(readonly, nonatomic) long long sortColumn;
- (void)setSortTitle:(id)arg1;
@property(readonly, nonatomic) __weak MailTableView *messagesTableView;
- (void)_updateMinimumViewWidth;
- (void)updateViewConstraints;
- (void)_updateFilter;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

