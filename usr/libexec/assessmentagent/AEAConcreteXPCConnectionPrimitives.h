//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AEAConcreteXPCConnectionPrimitives : NSObject
{
}

- (long long)connectionTypeForConnection:(id)arg1;	// IMP=0x004000000000285a
- (id)makeActiveRestrictionUUIDFetchingListener;	// IMP=0x0010000000002827
- (id)makeSourceRegisteringListener;	// IMP=0x00100000000027f4
- (id)auditTokenForConnection:(id)arg1;	// IMP=0x001000000000276c
- (_Bool)connectionCanFetchActiveRestrictionUUIDs:(id)arg1;	// IMP=0x001000000000271b
- (_Bool)connectionCanRegisterAsAssessmentSource:(id)arg1;	// IMP=0x00100000000026ca
- (_Bool)connectionCanPublishAssessmentState:(id)arg1;	// IMP=0x0010000000002679

@end

