//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBTLEPeripheral;

__attribute__((visibility("hidden")))
@interface CABTMIDIIncompleteConnectionInfo : NSObject
{
    _Bool _connecting;	// 8 = 0x8
    unsigned long long _timeOutInterval;	// 16 = 0x10
    AMSBTLEPeripheral *_peripheral;	// 24 = 0x18
}

@property(retain, nonatomic) AMSBTLEPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property unsigned long long timeOutInterval; // @synthesize timeOutInterval=_timeOutInterval;
@property(getter=isConnecting) _Bool connecting; // @synthesize connecting=_connecting;
- (void)dealloc;	// IMP=0x0000000000009a0f
- (id)initWithPeripheral:(id)arg1 isConnecting:(_Bool)arg2;	// IMP=0x0000000000009979

@end

