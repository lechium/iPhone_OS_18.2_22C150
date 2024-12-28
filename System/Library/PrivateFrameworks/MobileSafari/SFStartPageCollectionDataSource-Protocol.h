//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class NSArray, SFStartPageCollectionViewController, WBSStartPageSection;

@protocol SFStartPageCollectionDataSource <NSObject>
- (long long)customizationControlPolicyForStartPageCollectionViewController:(SFStartPageCollectionViewController *)arg1;
- (void)startPageCollectionViewControllerWillUpdateNavigationBar:(SFStartPageCollectionViewController *)arg1;
- (_Bool)startPageCollectionViewController:(SFStartPageCollectionViewController *)arg1 isSectionExpanded:(WBSStartPageSection *)arg2;
- (void)startPageCollectionViewController:(SFStartPageCollectionViewController *)arg1 toggleSectionExpanded:(WBSStartPageSection *)arg2;
- (NSArray *)sectionsForStartPageCollectionViewController:(SFStartPageCollectionViewController *)arg1;
@end
