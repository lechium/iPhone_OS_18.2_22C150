//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol UITraitChangeRegistration;

@protocol UITraitChangeObservable
- (void)unregisterForTraitChanges:(id <UITraitChangeRegistration>)arg1;
- (id <UITraitChangeRegistration>)registerForTraitChanges:(NSArray *)arg1 withAction:(SEL)arg2;
- (id <UITraitChangeRegistration>)registerForTraitChanges:(NSArray *)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (id <UITraitChangeRegistration>)registerForTraitChanges:(NSArray *)arg1 withHandler:(void (^)(id <UITraitEnvironment>, UITraitCollection *))arg2;
@end

