//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CRMessagingServiceVehicleRepresenting;

@interface CRMessagingVehicleAlert
{
    id <CRMessagingServiceVehicleRepresenting> _messagingVehicle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000040825
@property(readonly, nonatomic) id <CRMessagingServiceVehicleRepresenting> messagingVehicle; // @synthesize messagingVehicle=_messagingVehicle;
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004078f
- (id)lockscreenMessage;	// IMP=0x001000000004077e
- (id)initWithMessagingVehicle:(id)arg1;	// IMP=0x0010000000040710

@end
