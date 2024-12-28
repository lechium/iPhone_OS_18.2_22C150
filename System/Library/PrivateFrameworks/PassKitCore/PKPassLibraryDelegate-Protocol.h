//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSData, NSDictionary, NSSet, PKCatalog, PKPassLibrary;

@protocol PKPassLibraryDelegate <NSObject>

@optional
- (void)issuerBindingAuthenticationOccured;
- (void)vehicleConnectionDidRecievePassthroughData:(NSData *)arg1;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)arg1;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passLibrary:(PKPassLibrary *)arg1 receivedUpdatedCatalog:(PKCatalog *)arg2 passes:(NSSet *)arg3 states:(NSDictionary *)arg4;
- (void)passLibrary:(PKPassLibrary *)arg1 receivedUpdatedCatalog:(PKCatalog *)arg2 passes:(NSSet *)arg3;
- (void)passLibraryReceivedInterruption;
@end
