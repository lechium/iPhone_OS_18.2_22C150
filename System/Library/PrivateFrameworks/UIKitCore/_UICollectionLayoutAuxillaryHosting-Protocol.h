//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UITraitCollection, _UICollectionLayoutSupplementaryEnroller, _UICollectionPreferredSizes;
@protocol NSCollectionLayoutContainer;

@protocol _UICollectionLayoutAuxillaryHosting <NSObject>
- (_Bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (UITraitCollection *)auxillaryHostTraitCollection;
- (_UICollectionPreferredSizes *)auxillaryHostPreferredSizes;
- (_UICollectionLayoutSupplementaryEnroller *)auxillaryHostSupplementaryEnroller;
- (long long)auxillaryHostAuxillaryKind;
- (unsigned long long)auxillaryHostLayoutAxis;
- (_Bool)auxillaryHostShouldLayoutRTL;
- (NSArray *)auxillaryHostAuxillaryItems;
- (id <NSCollectionLayoutContainer>)auxillaryHostContainer;
- (struct CGRect)auxillaryHostPinningRect;
- (struct CGSize)auxillaryHostContentSize;

@optional
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;
- (struct CGPoint)auxillaryHostAdditionalFrameOffset;
@end

