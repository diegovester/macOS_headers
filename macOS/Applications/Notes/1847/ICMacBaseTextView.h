//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class CALayer, ICLayoutManager, ICMNoteEditorController, ICMZoomController, ICTextController, NSView, TTTextStorage;

@interface ICMacBaseTextView : NSTextView
{
    BOOL _textSelectionHidden;
    BOOL _shouldHideCaret;
    BOOL _didUpdateTextViewSelectedRange;
    BOOL _isPasting;
    BOOL _shouldCallUpdateTouchBarItemsAfterPaste;
    BOOL _isSettingTextStyle;
    BOOL _isDraggingChecklistItem;
    BOOL _isDraggingOverChecklistItem;
    BOOL _previouslyHadMarkedText;
    BOOL _needsDidChangeTextAfterPastingEnds;
    ICMNoteEditorController *_editorController;
    ICMZoomController *_zoomController;
    unsigned long long _previousSelectedRangeLength;
    CALayer *_tempHighlightLayer;
    CALayer *_insertionCursorLayer;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsDidChangeTextAfterPastingEnds; // @synthesize needsDidChangeTextAfterPastingEnds=_needsDidChangeTextAfterPastingEnds;
@property(nonatomic) BOOL previouslyHadMarkedText; // @synthesize previouslyHadMarkedText=_previouslyHadMarkedText;
@property(retain, nonatomic) CALayer *insertionCursorLayer; // @synthesize insertionCursorLayer=_insertionCursorLayer;
@property(readonly, nonatomic) BOOL isDraggingOverChecklistItem; // @synthesize isDraggingOverChecklistItem=_isDraggingOverChecklistItem;
@property(readonly, nonatomic) BOOL isDraggingChecklistItem; // @synthesize isDraggingChecklistItem=_isDraggingChecklistItem;
@property(retain, nonatomic) CALayer *tempHighlightLayer; // @synthesize tempHighlightLayer=_tempHighlightLayer;
@property(nonatomic) BOOL isSettingTextStyle; // @synthesize isSettingTextStyle=_isSettingTextStyle;
@property(nonatomic) BOOL shouldCallUpdateTouchBarItemsAfterPaste; // @synthesize shouldCallUpdateTouchBarItemsAfterPaste=_shouldCallUpdateTouchBarItemsAfterPaste;
@property(nonatomic) BOOL isPasting; // @synthesize isPasting=_isPasting;
@property(nonatomic) unsigned long long previousSelectedRangeLength; // @synthesize previousSelectedRangeLength=_previousSelectedRangeLength;
@property(nonatomic) BOOL didUpdateTextViewSelectedRange; // @synthesize didUpdateTextViewSelectedRange=_didUpdateTextViewSelectedRange;
@property(nonatomic) BOOL shouldHideCaret; // @synthesize shouldHideCaret=_shouldHideCaret;
@property(nonatomic) BOOL textSelectionHidden; // @synthesize textSelectionHidden=_textSelectionHidden;
@property(readonly, nonatomic) ICMZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(nonatomic) __weak ICMNoteEditorController *editorController; // @synthesize editorController=_editorController;
- (void)drawInsertionPointInRect:(struct CGRect)arg1 color:(id)arg2 turnedOn:(BOOL)arg3;
- (void)_blinkCaret:(id)arg1;
@property(readonly, nonatomic) NSView *containerViewForAttachments;
- (void)setTypingAttributes:(id)arg1;
- (id)typingAttributes;
- (void)setupLinkTextAttributes;
- (void)notifyMarkedText;
- (void)notifyUnmarkedText;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)didChangeText;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)handleTextCheckingResults:(id)arg1 forRange:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 orthography:(id)arg5 wordCount:(long long)arg6;
- (void)updateTypingAttributesWithSuperscript:(CDUnknownBlockType)arg1;
- (void)unscript:(id)arg1;
- (void)subscript:(id)arg1;
- (void)superscript:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)changeAttributes:(id)arg1;
- (void)underline:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeBaseWritingDirectionNatural:(id)arg1;
- (void)makeBaseWritingDirectionRightToLeft:(id)arg1;
- (void)makeBaseWritingDirectionLeftToRight:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)removeStyle:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)nsWriteSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)readablePasteboardTypes;
- (id)writablePasteboardTypes;
- (id)acceptableDragTypes;
- (id)customPasteboardData;
- (id)attributedSubstringForCopying;
- (void)paste:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)pasteAsRichText:(id)arg1;
- (void)pasteRuler:(id)arg1;
- (void)pasteFont:(id)arg1;
- (void)accentColorDidChange:(id)arg1;
- (void)fontPanelDidChangeFont:(id)arg1;
- (void)fontPanelWillChangeFont:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)changeAttributesWithModifier:(CDUnknownBlockType)arg1;
- (BOOL)shouldBeginEditing;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
@property(readonly, nonatomic) CALayer *tempHighlightLayerIfExists;
- (BOOL)shouldDrawInsertionPoint;
@property(readonly, nonatomic) BOOL supportsAttachments;
@property(readonly, nonatomic) ICLayoutManager *icLayoutManager;
@property(readonly, nonatomic) ICTextController *textController;
@property(readonly, nonatomic) TTTextStorage *TTTextStorage;
- (id)touchBar;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)ic_synchronizeAttributesFromChangingFontDescriptor:(BOOL)arg1;
- (void)ic_editAttributesInSelectedRanges:(CDUnknownBlockType)arg1;
- (void)ic_toggleFontHint:(unsigned int)arg1;
- (void)ic_toggleAttributeWithName:(id)arg1;
- (void)ic_enumerateAttributesInSelectedRanges:(CDUnknownBlockType)arg1;
- (BOOL)ic_allSelectedRangesContainAttributeName:(id)arg1;
- (BOOL)ic_allSelectedRangesContainFontHint:(unsigned int)arg1;
- (void)ic_synchronizeAttributesFromChangingFontHint;
- (void)ic_synchronizeAttributesFromChangingFontDescriptor;
- (void)ic_enumerateTableAttachmentViewControllersInRanges:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)ic_performBlock:(CDUnknownBlockType)arg1;
- (long long)ic_currentWritingDirection;
@property(readonly, nonatomic) unsigned long long ic_selectedBIUS;
- (id)ic_selectedStylesIgnoreTypingAttributes:(BOOL)arg1;
- (id)ic_selectedStyles;
- (void)ic_toggleStrikethrough;
- (void)ic_toggleUnderline;
- (void)ic_toggleItalics;
- (void)ic_toggleBoldface;
- (void)ic_indentByAmount:(long long)arg1;
- (void)ic_setTextStyleForCurrentSelection:(unsigned int)arg1;
- (BOOL)ic_canIndentByDelta:(long long)arg1;
- (BOOL)ic_canChangeStyle;

@end

