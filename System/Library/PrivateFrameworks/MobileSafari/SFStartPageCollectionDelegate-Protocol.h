//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class SFStartPageCollectionViewController;

@protocol SFStartPageCollectionDelegate <NSObject>
- (void)startPageCollectionViewController:(SFStartPageCollectionViewController *)arg1 shouldExpandSectionWithIdentifier:(id)arg2;
- (_Bool)startPageCollectionViewControllerShouldDeferLoadingContentUntilKeyboardAnimatesIn:(SFStartPageCollectionViewController *)arg1;
- (void)startPageCollectionViewControllerDidCompleteDismissGesture:(SFStartPageCollectionViewController *)arg1;
- (void)startPageCollectionViewControllerDidScroll:(SFStartPageCollectionViewController *)arg1;
- (void)beginCustomizationForStartPageCollectionViewController:(SFStartPageCollectionViewController *)arg1;
- (void)startPageCollectionViewController:(SFStartPageCollectionViewController *)arg1 didSelectItemWithIdentifier:(id)arg2 atGridLocation:(CDStruct_912cb5d2)arg3;
- (void)startPageCollectionViewControllerDidChangeBackgroundStyle:(SFStartPageCollectionViewController *)arg1;
- (_Bool)startPageCollectionViewControllerShouldInstallCustomBackdrops:(SFStartPageCollectionViewController *)arg1;
- (double)startPageCollectionViewControllerTopPadding:(SFStartPageCollectionViewController *)arg1;

@optional
- (void)startPageCollectionViewControllerDidUpdateContent:(SFStartPageCollectionViewController *)arg1;
@end
