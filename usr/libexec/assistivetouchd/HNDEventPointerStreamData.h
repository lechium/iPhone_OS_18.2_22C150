//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BSInvalidatable;

@interface HNDEventPointerStreamData : NSObject
{
    unsigned int _contextID;	// 8 = 0x8
    unsigned int _displayID;	// 12 = 0xc
    NSString *_hardwareIdentifier;	// 16 = 0x10
    id <BSInvalidatable> _pointerStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008276d
@property(retain, nonatomic) id <BSInvalidatable> pointerStream; // @synthesize pointerStream=_pointerStream;
@property(retain, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
@property(nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;

@end

