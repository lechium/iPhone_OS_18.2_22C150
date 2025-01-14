//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServer-Protocol.h>

@class HAPPairingIdentity, NSArray, NSString;
@protocol HAP2Accessory, HAP2Cancelable;

@protocol HAP2PairedAccessoryServer <HAP2AccessoryServer>
@property(readonly, nonatomic) NSString *productData;
@property(readonly, nonatomic) NSArray *accessories;
@property(readonly, nonatomic) id <HAP2Accessory> primaryAccessory;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (void)closeSession;
- (void)handleNetworkChanged;
- (void)stopConfirming;
- (void)startConfirming;
- (_Bool)isConfirming;
- (id <HAP2Cancelable>)updateAccessoriesWithReason:(NSString *)arg1;
- (id <HAP2Cancelable>)getPairingsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (id <HAP2Cancelable>)removePairing:(HAPPairingIdentity *)arg1 completion:(void (^)(NSError *))arg2;
- (id <HAP2Cancelable>)addPairing:(HAPPairingIdentity *)arg1 completion:(void (^)(NSError *))arg2;
- (id <HAP2Cancelable>)unpairWithCompletion:(void (^)(NSError *))arg1;
@end

