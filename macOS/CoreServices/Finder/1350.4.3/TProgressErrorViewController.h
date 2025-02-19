//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TViewController.h"

#import "NSTouchBarDelegate-Protocol.h"

@class NSImage, NSLayoutConstraint, NSStackView, NSString, TButton, TImageView, TTextField;

@interface TProgressErrorViewController : TViewController <NSTouchBarDelegate>
{
    TImageView *_imageView;
    struct TNSRef<NSImage, void> _image;
    struct TNSRef<NSImage, void> _badgeImage;
    TTextField *_messageTextFld;
    struct TString _messageString;
    NSStackView *_buttonStackView;
    struct TNSRef<NSLayoutConstraint, void> _buttonStackViewToImageLeadingConstraint;
    TButton *_leftButton;
    struct TString _leftButtonTitle;
    _Bool _leftButtonIsHiddenHint;
    struct TNSRef<TTargetActionFunctor, void> _leftButtonFunctorAdapter;
    TButton *_middleButton;
    struct TString _middleButtonTitle;
    _Bool _middleButtonIsHiddenHint;
    struct TNSRef<TTargetActionFunctor, void> _middleButtonFunctorAdapter;
    TButton *_rightButton;
    struct TString _rightButtonTitle;
    _Bool _rightButtonIsHiddenHint;
    struct TNSRef<TTargetActionFunctor, void> _rightButtonFunctorAdapter;
    TButton *_applyAllCheckbox;
    struct TNSRef<NSLayoutConstraint, void> _applyAllToImageTopConstraint;
    struct TNSRef<NSLayoutConstraint, void> _applyAllToImageLeadingConstraint;
    _Bool _applyToAllButtonIsHidden;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _observers;
    struct TNSWeakPtr<TTouchBar, void> _touchBar;
    struct TNSWeakPtr<TGroupTouchBarItem, void> _groupTouchBarItem;
    struct TNSWeakPtr<TTouchBar, void> _groupTouchBar;
    struct TNSWeakPtr<TButton, void> _touchBarLeftButton;
    struct TNSWeakPtr<TButton, void> _touchBarMiddleButton;
    struct TNSWeakPtr<TButton, void> _touchBarRightButton;
    _Bool _applyToAll;
    int _errorViewKind;
}

+ (id)keyPathsForValuesAffectingRightButtonIsHidden;
+ (id)keyPathsForValuesAffectingMiddleButtonIsHidden;
+ (id)keyPathsForValuesAffectingLeftButtonIsHidden;
+ (id)controllerForViewKind:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) int errorViewKind; // @synthesize errorViewKind=_errorViewKind;
@property(nonatomic) _Bool applyToAll; // @synthesize applyToAll=_applyToAll;
@property(nonatomic) _Bool applyToAllButtonIsHidden; // @synthesize applyToAllButtonIsHidden=_applyToAllButtonIsHidden;
@property(nonatomic) _Bool rightButtonIsHiddenHint; // @synthesize rightButtonIsHiddenHint=_rightButtonIsHiddenHint;
@property(nonatomic) _Bool middleButtonIsHiddenHint; // @synthesize middleButtonIsHiddenHint=_middleButtonIsHiddenHint;
@property(nonatomic) _Bool leftButtonIsHiddenHint; // @synthesize leftButtonIsHiddenHint=_leftButtonIsHiddenHint;
- (void)updateTouchBarButtons;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)updateConstraintsToAvoidImageOverlap;
- (id)initialKeyView;
- (void)setRightButtonFunctor:(const function_d3afe2e2 *)arg1;
- (void)rightButtonPressed:(id)arg1;
@property(readonly, nonatomic) _Bool rightButtonIsHidden; // @dynamic rightButtonIsHidden;
@property(copy, nonatomic) NSString *rightButtonTitle; // @dynamic rightButtonTitle;
- (void)setMiddleButtonFunctor:(const function_d3afe2e2 *)arg1;
- (void)middleButtonPressed:(id)arg1;
@property(readonly, nonatomic) _Bool middleButtonIsHidden; // @dynamic middleButtonIsHidden;
@property(copy, nonatomic) NSString *middleButtonTitle; // @dynamic middleButtonTitle;
- (void)setLeftButtonFunctor:(const function_d3afe2e2 *)arg1;
- (void)leftButtonPressed:(id)arg1;
@property(readonly, nonatomic) _Bool leftButtonIsHidden; // @dynamic leftButtonIsHidden;
@property(copy, nonatomic) NSString *leftButtonTitle; // @dynamic leftButtonTitle;
@property(retain, nonatomic) NSLayoutConstraint *applyAllToImageLeadingConstraint; // @dynamic applyAllToImageLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applyAllToImageTopConstraint; // @dynamic applyAllToImageTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonStackViewToImageLeadingConstraint; // @dynamic buttonStackViewToImageLeadingConstraint;
@property(copy, nonatomic) NSImage *badgeImage; // @dynamic badgeImage;
@property(copy, nonatomic) NSImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *messageString; // @dynamic messageString;
- (void)dealloc;
- (BOOL)acceptsFirstResponder;
- (void)configureView;
- (void)initCommon;
- (id)initWithViewKind:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

