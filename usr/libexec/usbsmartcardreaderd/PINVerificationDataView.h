//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PINVerificationDataView
{
}

+ (id)createWithInteraction:(id)arg1 error:(id *)arg2;	// IMP=0x002000000000b1e3
@property unsigned char lengthByte;
@property unsigned char protocolControlByte;
@property unsigned char nodeAddressByte;
@property unsigned char bMsgIndex;
@property unsigned short wLangId;
@property unsigned char bNumberMessage;
@property unsigned char bEntryValidationCondition;
@property unsigned short wPINMaxExtraDigit;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
