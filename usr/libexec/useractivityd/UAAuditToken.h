//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface UAAuditToken : NSValue
{
    CDStruct_4c969caf _auditTokenValue;	// 8 = 0x8
}

@property(readonly) CDStruct_4c969caf auditTokenValue; // @synthesize auditTokenValue=_auditTokenValue;
- (id)debugDescription;	// IMP=0x0010000000084d8f
- (id)description;	// IMP=0x0010000000084ca3
- (const char *)objCType;	// IMP=0x0010000000084c96
- (void)getValue:(void *)arg1;	// IMP=0x0010000000084c79
@property(readonly, getter=isSandboxed) _Bool sandboxed; // @dynamic sandboxed;
@property(readonly) int asid; // @dynamic asid;
@property(readonly) unsigned int rgid; // @dynamic rgid;
@property(readonly) unsigned int egid; // @dynamic egid;
@property(readonly) unsigned int ruid; // @dynamic ruid;
@property(readonly) unsigned int euid; // @dynamic euid;
@property(readonly) int pidVersion; // @dynamic pidVersion;
@property(readonly) int pid; // @dynamic pid;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x001000000008491e

@end

