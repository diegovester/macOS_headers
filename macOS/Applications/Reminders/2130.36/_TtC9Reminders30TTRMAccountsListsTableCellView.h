//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSArray, NSButton, NSStackView, NSTextField, _TtC15RemindersUICore16TTRListBadgeView;

@interface _TtC9Reminders30TTRMAccountsListsTableCellView : NSTableCellView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: canShare
    // Error parsing type: , name: isShared
    // Error parsing type: , name: stackView
    // Error parsing type: , name: countLabel
    // Error parsing type: , name: badge
    // Error parsing type: , name: shareButton
    // Error parsing type: , name: trackingArea
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityCustomActions;
- (id)accessibilityHelp;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityElement;
- (void)didTapShareButton:(id)arg1;
@property(nonatomic) __weak NSButton *shareButton; // @synthesize shareButton;
@property(nonatomic) __weak _TtC15RemindersUICore16TTRListBadgeView *badge; // @synthesize badge;
@property(nonatomic) __weak NSTextField *countLabel; // @synthesize countLabel;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;
@property(nonatomic, readonly) NSArray *draggingImageComponents;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)dealloc;

@end

