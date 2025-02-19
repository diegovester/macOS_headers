//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataSource.h"

#import "DataSourceCollectionView-Protocol.h"
#import "MapsUICollectionViewDiffableDataSourceCellProviding-Protocol.h"
#import "SearchHomeDataFetcherDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AutocompleteContext, NSArray, NSString, SearchHomeAnalyticsManager, UICollectionViewDiffableDataSource, UICollectionViewLayout;
@protocol SearchHomeDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface SearchHomeDataSource : DataSource <SearchHomeDataFetcherDelegate, MapsUICollectionViewDiffableDataSourceCellProviding, UICollectionViewDelegate, DataSourceCollectionView>
{
    BOOL _shouldHideHairLine;
    BOOL _needsToApplySnapshot;
    NSArray *_objectsForAnalytics;
    id <SearchHomeDataSourceDelegate> _searchHomeDataSourceDelegate;
    UICollectionViewDiffableDataSource *_collectionViewDiffableDataSource;
    UICollectionViewLayout *_collectionViewLayout;
    NSArray *_dataProviders;
    NSArray *_dataFetchers;
    NSArray *_layoutProviders;
    AutocompleteContext *_autocompleteContext;
    SearchHomeAnalyticsManager *_analyticsManager;
    NSArray *_cachedSnapshotObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedSnapshotObjects; // @synthesize cachedSnapshotObjects=_cachedSnapshotObjects;
@property(nonatomic) BOOL needsToApplySnapshot; // @synthesize needsToApplySnapshot=_needsToApplySnapshot;
@property(retain, nonatomic) SearchHomeAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(nonatomic) BOOL shouldHideHairLine; // @synthesize shouldHideHairLine=_shouldHideHairLine;
@property(retain, nonatomic) AutocompleteContext *autocompleteContext; // @synthesize autocompleteContext=_autocompleteContext;
@property(copy, nonatomic) NSArray *layoutProviders; // @synthesize layoutProviders=_layoutProviders;
@property(copy, nonatomic) NSArray *dataFetchers; // @synthesize dataFetchers=_dataFetchers;
@property(copy, nonatomic) NSArray *dataProviders; // @synthesize dataProviders=_dataProviders;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource; // @synthesize collectionViewDiffableDataSource=_collectionViewDiffableDataSource;
@property(nonatomic) __weak id <SearchHomeDataSourceDelegate> searchHomeDataSourceDelegate; // @synthesize searchHomeDataSourceDelegate=_searchHomeDataSourceDelegate;
- (id)objectsForAnalytics;
- (unsigned long long)_ppt_numberOfDataFetchers;
- (void)_ppt_selectCategoryAtIndex:(unsigned long long)arg1;
- (id)analyticsSuggestions;
- (void)sendNoTypingACAnalytics;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)heightForFooterInSection:(long long)arg1 dataProvider:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 dataProvider:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (id)dataProviderWithIdentifier:(id)arg1;
- (id)layoutProviderForDataProvider:(id)arg1;
- (id)newTraits;
- (void)didUpdateDataFetcher:(id)arg1;
- (void)applySnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)setNeedsUpdate;
- (BOOL)shouldShowNoRecentSearchesCell;
- (void)setActive:(BOOL)arg1;
- (long long)presentationStyle;
- (void)_hoverGestureRecognizerStateDidChange:(id)arg1;
- (id)initWithCollectionView:(id)arg1 updateLocation:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

