//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (Sharing_Additions)
- (_Bool)sd_connectionCanShareURL:(id)arg1;	// IMP=0x0010000000004b68
- (_Bool)sd_connectionHasEntitlement:(id)arg1;	// IMP=0x0010000000004b0e
@property(readonly, copy) NSString *sd_connectionProcessName;
@property(readonly, copy) NSString *sd_connectionBundleID;
@property(readonly, copy) NSString *sd_description;
- (_Bool)_connectionHasEntitlement:(id)arg1;	// IMP=0x00100000000bc57a
@end

