//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRExternalDeviceTransportConnection, NSDate, NSString;
@protocol NSObject;

@interface MRDIDSRemoteControlServiceRemoteControlChannel : NSObject
{
    NSString *_destination;	// 8 = 0x8
    NSString *_session;	// 16 = 0x10
    MRExternalDeviceTransportConnection *_transport;	// 24 = 0x18
    NSDate *_connectionAttemptDate;	// 32 = 0x20
    MISSING_TYPE *_notificationToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000007b76f
@property(retain, nonatomic) id <NSObject> notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) NSDate *connectionAttemptDate; // @synthesize connectionAttemptDate=_connectionAttemptDate;
@property(retain, nonatomic) MRExternalDeviceTransportConnection *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (id)debugDescription;	// IMP=0x001000000007b5e5

@end

