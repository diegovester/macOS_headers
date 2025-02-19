//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPopoverDelegate-Protocol.h"

@class NSImage, NSNumber, NSString, TPInteractiveCanvasController;

@interface _TtC5Pages38TPMacPageLayoutInspectorPropertyVendor : NSObject <NSPopoverDelegate>
{
    // Error parsing type: , name: canvasEditor
    // Error parsing type: , name: pageTemplateProvider
    // Error parsing type: , name: keysToInvalidate
    // Error parsing type: , name: mostVisiblePageIndex
    // Error parsing type: , name: currentPageTemplateChooser
    // Error parsing type: , name: templatePopover
    // Error parsing type: , name: templateChanged
}

- (void).cxx_destruct;
- (id)init;
- (void)pageTemplateChooserDidCancel:(id)arg1;
- (void)pageTemplateChooser:(id)arg1 didSelectPageTemplateAtIndex:(long long)arg2;
- (void)didProcessAllChanges;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)updateDisplayedPage:(id)arg1;
- (void)templateIndexDidChange:(id)arg1;
@property(nonatomic, readonly) BOOL hasPageNumberAttachmentInHeaderOrFooter;
@property(nonatomic, readonly) NSNumber *enableShowAndMatchHeaderFooterControls;
@property(nonatomic, readonly) NSNumber *enableSectionPageNumberStart;
@property(nonatomic, readonly) double pageAspectRatio;
@property(nonatomic, retain) NSNumber *sectionPageNumberStart;
@property(nonatomic, retain) NSNumber *sectionPageNumberKind;
@property(nonatomic, copy) NSString *sectionPageNumberFormat;
@property(nonatomic, readonly) NSNumber *sectionNotFirstSection;
@property(nonatomic, retain) NSNumber *inheritPreviousHeaderFooter;
@property(nonatomic, retain) NSNumber *showsHeaderFooter;
@property(nonatomic, readonly) NSNumber *hasPageTemplate;
@property(nonatomic, readonly) NSString *pageTemplateName;
@property(nonatomic, readonly) NSImage *pageTemplateThumbnail;
- (id)makePageTemplateChooserPopover;
- (void)teardown;
@property(nonatomic, readonly) TPInteractiveCanvasController *interactiveCanvasController;
- (id)initWithCanvasEditor:(id)arg1;

@end

