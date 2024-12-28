//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DYGTCAMetalLayerInfo : NSObject
{
    unsigned long long _deviceAddress;	// 8 = 0x8
    unsigned long long _deviceStreamRef;	// 16 = 0x10
    unsigned long long _layerAddress;	// 24 = 0x18
    unsigned long long _layerStreamRef;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    struct CGRect _frame;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000005ffa
- (void).cxx_destruct;	// IMP=0x00200000000062c3
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long layerStreamRef; // @synthesize layerStreamRef=_layerStreamRef;
@property(nonatomic) unsigned long long layerAddress; // @synthesize layerAddress=_layerAddress;
@property(nonatomic) unsigned long long deviceStreamRef; // @synthesize deviceStreamRef=_deviceStreamRef;
@property(nonatomic) unsigned long long deviceAddress; // @synthesize deviceAddress=_deviceAddress;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000006145
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000006002

@end
