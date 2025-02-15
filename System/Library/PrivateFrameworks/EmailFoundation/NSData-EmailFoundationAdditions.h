//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class EFSQLBinding, NSString;

@interface NSData (EmailFoundationAdditions)
+ (id)ef_crlfData;	// IMP=0x001000000002170b
- (_Bool)ef_containsData:(id)arg1;	// IMP=0x0010000000021a61
- (_Bool)ef_hasSuffix:(id)arg1;	// IMP=0x001000000002196e
- (struct _NSRange)ef_rangeOfData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000000218f2
- (struct _NSRange)ef_rangeOfData:(id)arg1;	// IMP=0x00100000000218de
- (void)ef_enumerateSubdataOfSize:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000217e1
- (id)ef_subdataToIndex:(unsigned long long)arg1;	// IMP=0x00100000000217ca
- (id)ef_subdataFromIndex:(unsigned long long)arg1;	// IMP=0x0010000000021787
@property(readonly, copy) NSData *ef_sha256Digest;
- (id)ef_sha256DigestWithSalts:(id)arg1;	// IMP=0x001000000002143e
@property(readonly, copy) NSString *ef_hexString;
@property(readonly, copy) NSData *ef_md5Digest;
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

