//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _SEExtensionProcess : NSObject
{
}

- (id)init;	// IMP=0x000000000000b660
@property(nonatomic, readonly) CDStruct_6ad76789 auditToken;
- (id)grantCapability:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b430
- (id)grantCapabilities:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b290
- (void)invalidate;	// IMP=0x000000000000b200
- (id)makeLibXPCConnectionError:(id *)arg1;	// IMP=0x000000000000b130

@end

