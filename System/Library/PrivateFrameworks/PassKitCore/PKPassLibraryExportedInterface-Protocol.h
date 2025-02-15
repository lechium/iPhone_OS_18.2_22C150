//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSSet, PKCatalog, PKPass;

@protocol PKPassLibraryExportedInterface
- (void)issuerBindingAuthenticationOccured;
- (void)vehicleConnectionDidRecievePassthroughData:(NSData *)arg1;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)arg1;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passRecovered:(PKPass *)arg1;
- (void)passRemoved:(PKPass *)arg1;
- (void)passUpdated:(PKPass *)arg1;
- (void)passAdded:(PKPass *)arg1;
- (void)catalogChanged:(PKCatalog *)arg1 withNewPasses:(NSSet *)arg2 states:(NSDictionary *)arg3;
- (void)catalogChanged:(PKCatalog *)arg1 withNewPasses:(NSSet *)arg2;
@end

