//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DragAndDropMapItemObserver-Protocol.h"
#import "DragAndDropPreviewContentUpdateDelegate-Protocol.h"
#import "HomeDataProvidingObserver-Protocol.h"
#import "HomeOutlineSectionControllerSubclassing-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDragDelegate-Protocol.h"
#import "UICollectionViewDropDelegate-Protocol.h"

@class DragAndDropPreview, HomeOutlineSectionControllerConfiguration, IdentifierPath, MapsUIDiffableDataSourceIdentifierCache, MapsUIDiffableDataSourceOutlineNodeSnapshot, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIDragItem;
@protocol HomeOutlineSectionControllerDelegate, MapsUIDiffableDataSourceViewModel;

__attribute__((visibility("hidden")))
@interface HomeOutlineSectionController : NSObject <HomeOutlineSectionControllerSubclassing, DragAndDropMapItemObserver, DragAndDropPreviewContentUpdateDelegate, UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, HomeDataProvidingObserver>
{
    MapsUIDiffableDataSourceOutlineNodeSnapshot *_sectionSnapshot;
    NSMutableDictionary *_deletions;
    MapsUIDiffableDataSourceIdentifierCache *_identifierCache;
    NSMutableSet *_expandedIdentifierPaths;
    UIDragItem *_dragItem;
    DragAndDropPreview *_dragAndDropPreview;
    BOOL _active;
    HomeOutlineSectionControllerConfiguration *_configuration;
    IdentifierPath *_sectionIdentifierPath;
    IdentifierPath *_focusedIdentifierPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IdentifierPath *focusedIdentifierPath; // @synthesize focusedIdentifierPath=_focusedIdentifierPath;
@property(readonly, nonatomic) IdentifierPath *sectionIdentifierPath; // @synthesize sectionIdentifierPath=_sectionIdentifierPath;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) HomeOutlineSectionControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSSet *expandedIdentifierPaths; // @synthesize expandedIdentifierPaths=_expandedIdentifierPaths;
@property(readonly, nonatomic) NSDictionary *deletions; // @synthesize deletions=_deletions;
- (id)contextMenuForSnapshot:(id)arg1;
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)dragAndDropPreviewDidUpdate:(id)arg1;
- (void)dragAndDropItem:(id)arg1 didResolveMapItem:(id)arg2;
- (id)mapItemForDropSession:(id)arg1;
- (BOOL)isDestinationOfDropCoordinator:(id)arg1;
- (BOOL)isSourceOfDropCoordinator:(id)arg1;
- (void)_updateDragAndDropPreview;
- (id)_snapshotByFilteringDeletionsFromSnapshot:(id)arg1;
- (void)_scrubDeletionsWithSectionSnapshot:(id)arg1;
- (id)_sectionSnapshotByProcessingDeletionsInSectionSnapshot:(id)arg1;
- (id)deletionWithSnapshot:(id)arg1;
- (void)_removeDeletions:(id)arg1 applySnapshot:(BOOL)arg2;
- (void)endFailedDeletions:(id)arg1 error:(id)arg2;
- (void)beginDeletions:(id)arg1;
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;
- (id)contentInjectorForSnapshot:(id)arg1;
@property(readonly, nonatomic) MapsUIDiffableDataSourceIdentifierCache *identifierCache;
@property(readonly, nonatomic) NSSet *selectedIdentifierPaths;
- (void)toggleElementAtIdentifierPath:(id)arg1;
- (void)collapseElementAtIdentifierPath:(id)arg1;
- (void)expandElementAtIdentifierPath:(id)arg1;
@property(readonly, nonatomic) BOOL expanded;
- (void)invalidateSectionSnapshot;
@property(readonly, nonatomic) MapsUIDiffableDataSourceOutlineNodeSnapshot *sectionSnapshot;
@property(readonly, nonatomic) __weak id <HomeOutlineSectionControllerDelegate> delegate;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

