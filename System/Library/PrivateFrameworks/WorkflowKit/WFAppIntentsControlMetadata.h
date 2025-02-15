//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHSControlIdentity, MISSING_TYPE;
@protocol WFUserInterfaceHost;

@interface WFAppIntentsControlMetadata : NSObject
{
    MISSING_TYPE *type;	// 8 = 0x8
    MISSING_TYPE *identity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003030f6
- (id)init;	// IMP=0x00000000003030c0
@property(nonatomic, readonly) CHSControlIdentity *identity; // @synthesize identity;
@property(nonatomic, readonly) unsigned long long type; // @synthesize type;
- (void)presentIfPossibleInUserInterface:(id <WFUserInterfaceHost>)arg1 completionBlock:(void (^)(NSError *))arg2;	// IMP=0x0000000000303456

@end

