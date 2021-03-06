//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLCloudFeedNavigating.h"
#import "PLNavigableAssetContainerListViewController.h"
#import "PLNavigablePhotoStreamViewController.h"
#import "PUAlbumStreamActivityDelegate.h"
#import "PUFeedRecentsManagerDelegate.h"
#import "PUStackedAlbumControllerTransition.h"
#import "PUStackedAlbumTransitionDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSDate, NSMutableSet, NSObject<PLAlbumContainer>, NSObject<PLAlbumProtocol>, NSOrderedSet, NSString, PUAlbumListViewControllerSpec, PUAlbumStreamActivity, PUCollageView, PUFeedRecentsManager, PUFeedViewController, PUImageManager, PUPhotoPinchGestureRecognizer, PUPhotosGlobalFooterView, PUSessionInfo, UIBarButtonItem, UIView, _UIContentUnavailableView;

@interface PUAbstractAlbumListViewController : UIViewController <UIGestureRecognizerDelegate, PUStackedAlbumTransitionDelegate, PUAlbumStreamActivityDelegate, PUFeedRecentsManagerDelegate, PLNavigableAssetContainerListViewController, PLCloudFeedNavigating, PLNavigablePhotoStreamViewController, PUStackedAlbumControllerTransition>
{
    UIBarButtonItem *_doneButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_albumCreationButtonItem;
    NSDate *_lastForegroundedDate;
    PUAlbumStreamActivity *_albumStreamActivity;
    NSString *_albumSubtitleFormat;
    BOOL _showAddNewAlbumPlaceholder;
    BOOL _isRootSharedAlbumList;
    BOOL _viewInSyncWithModel;
    BOOL __aboutToCreateAlbum;
    BOOL __isKeyboardAware;
    BOOL _progressViewVisible;
    NSArray *__syncProgressAlbums;
    PUAlbumListViewControllerSpec *_spec;
    PUSessionInfo *_sessionInfo;
    struct NSObject *_albumList;
    NSOrderedSet *_albums;
    struct NSObject *_retitlingAlbum;
    PUImageManager *__imageManager;
    PUFeedRecentsManager *__feedRecentsManager;
    PUCollageView *__feedCollageView;
    _UIContentUnavailableView *__emptyPlaceholderView;
    UIView *__backgroundView;
    struct NSObject *__justCreatedAlbum;
    CDUnknownBlockType __justCreatedAlbumAnimationCompletionHandler;
    CDUnknownBlockType __onViewDidLayoutSubviewsBlock;
    PUPhotosGlobalFooterView *_syncProgressView;
    id <PLAlbumProtocol> _pushedAlbum;
    UIViewController *_pushedController;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    PUFeedViewController *__cachedFeedViewController;
    NSMutableSet *__preheatedAlbums;
    struct CGRect __previousPreheatRect;
}

@property(retain, nonatomic, setter=_setPreheatedAlbums:) NSMutableSet *_preheatedAlbums; // @synthesize _preheatedAlbums=__preheatedAlbums;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(retain, nonatomic, setter=_setCachedFeedViewController:) PUFeedViewController *_cachedFeedViewController; // @synthesize _cachedFeedViewController=__cachedFeedViewController;
@property(retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // @synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer;
@property(retain, nonatomic) UIViewController *pushedController; // @synthesize pushedController=_pushedController;
@property(retain, nonatomic) id <PLAlbumProtocol> pushedAlbum; // @synthesize pushedAlbum=_pushedAlbum;
@property(retain, nonatomic) PUPhotosGlobalFooterView *syncProgressView; // @synthesize syncProgressView=_syncProgressView;
@property(nonatomic) BOOL progressViewVisible; // @synthesize progressViewVisible=_progressViewVisible;
@property(nonatomic, setter=_setKeyboardAware:) BOOL _isKeyboardAware; // @synthesize _isKeyboardAware=__isKeyboardAware;
@property(copy, nonatomic, setter=_setOnViewDidLayoutSubviewsBlock:) CDUnknownBlockType _onViewDidLayoutSubviewsBlock; // @synthesize _onViewDidLayoutSubviewsBlock=__onViewDidLayoutSubviewsBlock;
@property(nonatomic, setter=_setAboutToCreateAlbum:) BOOL _aboutToCreateAlbum; // @synthesize _aboutToCreateAlbum=__aboutToCreateAlbum;
@property(copy, nonatomic, setter=_setJustCreatedAlbumAnimationCompletionHandler:) CDUnknownBlockType _justCreatedAlbumAnimationCompletionHandler; // @synthesize _justCreatedAlbumAnimationCompletionHandler=__justCreatedAlbumAnimationCompletionHandler;
@property(retain, nonatomic, setter=_setJustCreatedAlbum:) NSObject<PLAlbumProtocol> *_justCreatedAlbum; // @synthesize _justCreatedAlbum=__justCreatedAlbum;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(retain, nonatomic) PUCollageView *_feedCollageView; // @synthesize _feedCollageView=__feedCollageView;
@property(retain, nonatomic) PUFeedRecentsManager *_feedRecentsManager; // @synthesize _feedRecentsManager=__feedRecentsManager;
@property(readonly, nonatomic) PUImageManager *_imageManager; // @synthesize _imageManager=__imageManager;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *retitlingAlbum; // @synthesize retitlingAlbum=_retitlingAlbum;
@property(nonatomic, getter=isViewInSyncWithModel) BOOL viewInSyncWithModel; // @synthesize viewInSyncWithModel=_viewInSyncWithModel;
- (void)_setAlbums:(id)arg1;
@property(retain, nonatomic) NSOrderedSet *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) NSObject<PLAlbumContainer> *albumList; // @synthesize albumList=_albumList;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) PUAlbumListViewControllerSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) BOOL isRootSharedAlbumList; // @synthesize isRootSharedAlbumList=_isRootSharedAlbumList;
- (void).cxx_destruct;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setAlbumListTransitionContext:(id)arg1;
- (id)gridLayout;
- (id)collectionView;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (void)albumStreamActivity:(id)arg1 didCreateAlbum:(struct NSObject *)arg2;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3;
- (BOOL)pu_handleSecondTabTap;
- (void)navigateToPhotoStreamMode:(int)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_nextCloudFeedNavigatingObject;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (void)navigateToRevealAssetContainer:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToAssetContainer:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_createControllerForStandInAlbum:(struct NSObject *)arg1;
- (void)albumListCellContentView:(id)arg1 didEndRetitingFromTitle:(id)arg2 toTitle:(id)arg3;
- (BOOL)albumListCellContentViewShouldBeginRetitling:(id)arg1;
- (void)albumListCellContentView:(id)arg1 performDeleteAction:(id)arg2;
- (void)feedRecentsManagerRecentAssetsDidChange:(id)arg1;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_updateAlbumSubtitleFormat;
- (void)updateSyncProgress;
- (void)assetContainerDidChange:(id)arg1;
- (void)_updateAlbumsOrderIfNeededSynchronously:(BOOL)arg1;
- (void)_appWillEnterForeground:(id)arg1;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)setKeyboardAware:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)_suppressionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)_invalidateSyncProgressAlbums;
@property(readonly, nonatomic) NSArray *_syncProgressAlbums; // @synthesize _syncProgressAlbums=__syncProgressAlbums;
- (void)_updatePreheatedAssets;
- (void)_resetPreheating;
- (id)_visibleAssetsForAlbum:(struct NSObject *)arg1;
- (void)_getDisplayableAssets:(id *)arg1 indexes:(id *)arg2 forAlbum:(struct NSObject *)arg3 maximumCount:(int)arg4;
- (id)_getDisplayableFacesForStandInAlbumWithAlbumList:(struct NSObject *)arg1 maximumCount:(int)arg2;
- (id)_getDisplayableAssetsForStandInAlbumWithAlbumList:(struct NSObject *)arg1 maximumCount:(int)arg2;
- (void)_beginInteractiveZoomOut:(id)arg1;
- (void)_beginInteractiveNavigationForItemAtPoint:(struct CGPoint)arg1;
- (void)_handlePhotoPinchGestureRecognizer:(id)arg1;
- (id)newCloudFeedViewController;
- (id)newGridViewControllerForAlbum:(struct NSObject *)arg1;
- (id)newGridViewControllerForStandInAlbum:(struct NSObject *)arg1;
- (void)handleSessionInfoAlbumSelection:(struct NSObject *)arg1;
- (void)handleDeleteAlbumAtIndexPath:(id)arg1;
- (void)handleCreateAlbum;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)_didSelectPlaceholderAtIndexPath:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)handleCreateSharedAlbum;
- (void)_handleAlbumCreation:(id)arg1;
- (id)indexPathForAddNewAlbumPlaceholder;
- (id)indexPathForCloudFeedPlaceholder;
- (int)placeholderKindAtIndexPath:(id)arg1;
- (BOOL)isPlaceholderAtIndexPath:(id)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
@property(readonly, nonatomic) int bottomPlaceholdersSection;
@property(readonly, nonatomic) int albumsSection;
@property(readonly, nonatomic) int topPlaceholdersSection;
- (BOOL)showsBottomPlaceholdersSection;
- (BOOL)showsSeparatorBelowTopPlaceholdersSection;
- (BOOL)showsTopPlaceholdersSection;
- (BOOL)shouldBeginRetitlingAlbumAtIndexPath:(id)arg1;
- (BOOL)shouldAllowEmailInAlbumSubtitle;
- (id)subtitleForAlbum:(struct NSObject *)arg1;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (void)_updateCollageView:(id)arg1 forAssets:(id)arg2;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 withCustomEmptyPlaceholderImage:(id)arg3;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 withCustomEmptyPlaceholderImage:(id)arg3;
- (void)_prepareStackView:(id)arg1 withStackCount:(int)arg2 withCustomEmptyPlaceHolderImage:(id)arg3;
- (void)updatePlaceholderListCellContentView:(struct PUAlbumListCellContentView *)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)setTitleForCell:(id)arg1 withAlbum:(struct NSObject *)arg2;
- (void)updateAlbumListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)updateListCellForItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_updateAddNewAlbumPlaceholderAnimated:(BOOL)arg1;
- (BOOL)showAddNewAlbumPlaceholder;
- (BOOL)shouldShowActivityItem;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (void)_updateNavigationBannerAnimated:(BOOL)arg1;
- (id)_pickerBannerView;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (int)cellContentViewLayout;
- (BOOL)canShowSyncProgress;
- (BOOL)showsDeleteButtonOnCellContentView;
- (struct PUAlbumListCellContentView *)visiblePlaceholderListCellContentViewAtIndexPath:(id)arg1;
- (id)visibleAlbumListCellContentViewAtIndexPath:(id)arg1;
- (id)indexPathForAlbumListCellContentView:(id)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexPathsForVisibleItems;
- (void)performBatchUpdatesWithDeletedIndexPaths:(id)arg1 insertedIndexPaths:(id)arg2 changedIndexPaths:(id)arg3 movedFromIndexPaths:(id)arg4 movedToIndexPaths:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)visiblyInsertItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mainScrollView;
- (void)deselectSelectedItemAnimated:(BOOL)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToItemAtIndexPath:(id)arg1 centered:(BOOL)arg2 animated:(BOOL)arg3;
- (void)reloadContentView;
- (struct NSObject *)albumAtIndexPath:(id)arg1;
- (id)indexPathForAlbum:(struct NSObject *)arg1;
- (id)_visibleStackViewForAlbum:(struct NSObject *)arg1;
- (id)_visibleStackViewAtIndexPath:(id)arg1;
- (BOOL)_someAlbumSupportsEditing;
- (unsigned int)_editCapabilitiesForAlbum:(struct NSObject *)arg1;
- (BOOL)shouldEnableAlbum:(struct NSObject *)arg1;
- (BOOL)canReorderAlbum:(struct NSObject *)arg1;
- (BOOL)canRenameAlbum:(struct NSObject *)arg1;
- (BOOL)canDeleteAlbum:(struct NSObject *)arg1;
- (BOOL)showsEmptyPlaceholderWhenEmpty;
- (BOOL)isEmpty;
- (id)_neededAlbumRelationships;
- (id)_neededAlbumProperties;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (BOOL)_updateInterfaceForIncrementalModelChangeWithNotification:(id)arg1 animated:(BOOL)arg2;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (id)_albumCreationButtonItem;
- (id)_cancelButtonItem;
- (id)_doneButtonItem;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 isRootSharedAlbumList:(BOOL)arg2;

@end

