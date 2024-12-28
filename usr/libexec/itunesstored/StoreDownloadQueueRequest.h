//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface StoreDownloadQueueRequest : NSObject
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    _Bool _cancelsDuplicateDownloads;	// 16 = 0x10
    long long _purchaseIdentifier;	// 24 = 0x18
    NSString *_queueIdentifier;	// 32 = 0x20
    NSString *_reason;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00200000000c0663
- (void);	// IMP=0x00200000000c07b1
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(nonatomic) long long purchaseIdentifier; // @synthesize purchaseIdentifier=_purchaseIdentifier;
@property(nonatomic) _Bool cancelsDuplicateDownloads; // @synthesize cancelsDuplicateDownloads=_cancelsDuplicateDownloads;
@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c05c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c049d
- (unsigned long long)hash;	// IMP=0x00100000000c0487
- (id)description;	// IMP=0x00100000000c0427
@property(readonly, nonatomic) NSString *queueCountURLBagKey;
@property(readonly, nonatomic) NSString *queueContentsURLBagKey;
- (void)dealloc;	// IMP=0x00100000000c0374

@end
