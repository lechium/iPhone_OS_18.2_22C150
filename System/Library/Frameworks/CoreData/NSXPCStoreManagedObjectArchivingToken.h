//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSXPCStoreManagedObjectArchivingToken : NSObject
{
    NSURL *_managedObjectReferenceURI;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001dd21
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e0a6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001dde9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ddc6
- (void)dealloc;	// IMP=0x000000000001dd83
- (id)URI;	// IMP=0x000000000001dd79
- (id)initWithURI:(id)arg1;	// IMP=0x000000000001dd29

@end
