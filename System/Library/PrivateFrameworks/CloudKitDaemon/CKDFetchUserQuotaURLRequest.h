//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest
{
    CDUnknownBlockType _quotaFetchedBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000270657
@property(copy, nonatomic) CDUnknownBlockType quotaFetchedBlock; // @synthesize quotaFetchedBlock=_quotaFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000027058c
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000270485
- (id)generateRequestOperations;	// IMP=0x00000000002703b7
- (id)requestOperationClasses;	// IMP=0x000000000027034b
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000027031c

@end

