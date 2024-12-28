//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PINModificationDataView
{
}

+ (unsigned long long)lengthFromNumberMessage:(unsigned char)arg1;	// IMP=0x002000000000bd84
+ (id)createWithInteraction:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000b89a
@property unsigned char lengthByte;
@property unsigned char protocolControlByte;
@property unsigned char nodeAddressByte;
@property unsigned char bMsgIndex3;
@property unsigned char bMsgIndex2;
@property unsigned char bMsgIndex1;
@property unsigned short wLangId;
- (void)setNumberMessage:(unsigned char)arg1;	// IMP=0x001000000000c128
@property(readonly) unsigned char bNumberMessage;
@property unsigned char bEntryValidationCondition;
@property unsigned char bConfirmPIN;
@property unsigned short wPINMaxExtraDigit;
@property unsigned char bInsertionOffsetNew;
@property unsigned char bInsertionOffsetOld;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
