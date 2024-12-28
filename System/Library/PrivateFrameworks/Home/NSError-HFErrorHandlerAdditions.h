//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HFErrorHandlerAdditions)
+ (id)hf_errorWithCode:(long long)arg1 operation:(id)arg2 options:(id)arg3;	// IMP=0x00200000001ab3a2
+ (id)hf_mappedHMError:(id)arg1;	// IMP=0x002000000034a087
+ (id)hf_internalErrorWithDescription:(id)arg1;	// IMP=0x0020000000349fc6
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x0020000000349f2d
+ (id)hf_errorWithCode:(long long)arg1 title:(id)arg2 description:(id)arg3;	// IMP=0x0020000000349dbc
+ (id)hf_errorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x0020000000349d9e
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2;	// IMP=0x0020000000349cee
+ (id)hf_errorWithCode:(long long)arg1;	// IMP=0x0020000000349cc4
- (id)hf_errorWithOperationType:(id)arg1 failedItemName:(id)arg2;	// IMP=0x00100000001ab5c5
- (id)hf_errorWithOperationType:(id)arg1 options:(id)arg2;	// IMP=0x00100000001ab454
- (_Bool)hf_isHFErrorWithCode:(long long)arg1;	// IMP=0x001000000034a260
@property(readonly, nonatomic) _Bool hf_isAlreadyPairedError;
@property(readonly, nonatomic) _Bool hf_isThreadNetworkRequiredError;
- (id)hf_errorWithAddedUserInfo:(id)arg1;	// IMP=0x00100000003b363b
- (_Bool)hf_isPublicHMError;	// IMP=0x00100000003b35c1
- (_Bool)hf_isHMHomeWalletKeyErrorWithCode:(long long)arg1;	// IMP=0x00100000003b3548
- (_Bool)hf_isHMErrorWithCodePrivate:(long long)arg1;	// IMP=0x00100000003b34cf
- (_Bool)hf_isHMErrorWithCode:(long long)arg1;	// IMP=0x00100000003b3456
- (_Bool)hf_isHFErrorWithCode:(long long)arg1;	// IMP=0x00100000003b33dd
@property(readonly, nonatomic) _Bool hf_isHomeKitUnreachableError;
@property(readonly, nonatomic) _Bool hf_isHomeKitNamingError;
@end
