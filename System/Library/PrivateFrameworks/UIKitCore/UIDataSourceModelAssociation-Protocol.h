//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, NSString, UIView;

@protocol UIDataSourceModelAssociation
- (NSIndexPath *)indexPathForElementWithModelIdentifier:(NSString *)arg1 inView:(UIView *)arg2;
- (NSString *)modelIdentifierForElementAtIndexPath:(NSIndexPath *)arg1 inView:(UIView *)arg2;
@end
