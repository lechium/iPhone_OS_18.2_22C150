//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BYCapabilities;

@interface BYDaemonDataMigrator : NSObject
{
    BYCapabilities *_capabilities;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000817e
@property(retain, nonatomic) BYCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)migrateWithStoredMigratorVersion:(unsigned int)arg1 userDataDisposition:(unsigned int)arg2;	// IMP=0x0010000000007f85
- (id)init;	// IMP=0x0010000000007f1a

@end
