//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsKit/NSObject-Protocol.h>

@class FCUserInfo, NSString;
@protocol FCFeldsparIDProviderObserving;

@protocol FCFeldsparIDProvider <NSObject>
@property(readonly, copy, nonatomic) NSString *feldsparID;
- (void)removeObserver:(id <FCFeldsparIDProviderObserving>)arg1;
- (void)addObserver:(id <FCFeldsparIDProviderObserving>)arg1;
- (void)registerUserInfo:(FCUserInfo *)arg1;
@end

