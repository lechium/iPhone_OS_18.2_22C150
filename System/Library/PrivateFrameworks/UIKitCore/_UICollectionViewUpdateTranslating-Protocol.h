//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, NSString;

@protocol _UICollectionViewUpdateTranslating <NSObject>
- (long long)finalSectionCount;
- (long long)initialSectionCount;
- (struct _NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1;
- (struct _NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1;
- (NSIndexPath *)initialIndexPathForSupplementaryElementOfKind:(NSString *)arg1 forFinalIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)finalIndexPathForSupplementaryElementOfKind:(NSString *)arg1 forInitialIndexPath:(NSIndexPath *)arg2;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (NSIndexPath *)initialIndexPathForFinalIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)finalIndexPathForInitialIndexPath:(NSIndexPath *)arg1;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
@end
