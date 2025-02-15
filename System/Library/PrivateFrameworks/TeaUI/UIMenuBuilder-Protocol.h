//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIAction, UICommand, UIMenu, UIMenuSystem;

@protocol UIMenuBuilder
@property(readonly, nonatomic) UIMenuSystem *system;
- (void)removeMenuForIdentifier:(NSString *)arg1;
- (void)insertChildMenu:(UIMenu *)arg1 atEndOfMenuForIdentifier:(NSString *)arg2;
- (void)insertChildMenu:(UIMenu *)arg1 atStartOfMenuForIdentifier:(NSString *)arg2;
- (void)insertSiblingMenu:(UIMenu *)arg1 afterMenuForIdentifier:(NSString *)arg2;
- (void)insertSiblingMenu:(UIMenu *)arg1 beforeMenuForIdentifier:(NSString *)arg2;
- (void)replaceChildrenOfMenuForIdentifier:(NSString *)arg1 fromChildrenBlock:(NSArray * (^)(NSArray *))arg2;
- (void)replaceMenuForIdentifier:(NSString *)arg1 withMenu:(UIMenu *)arg2;
- (UICommand *)commandForAction:(SEL)arg1 propertyList:(id)arg2;
- (UIAction *)actionForIdentifier:(NSString *)arg1;
- (UIMenu *)menuForIdentifier:(NSString *)arg1;
@end

