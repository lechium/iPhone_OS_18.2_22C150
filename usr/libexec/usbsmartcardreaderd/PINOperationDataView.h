//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PINOperationDataView
{
}

@property unsigned char lengthByte;
@property unsigned char protocolControlByte;
@property unsigned char nodeAddressByte;
@property unsigned char bmPINLengthFormat;
@property unsigned char bmPINBlockString;
@property unsigned char bmFormatString;
@property unsigned char bTimeOut;
@property unsigned char bPINOperation;
- (id)initWithData:(id)arg1;	// IMP=0x001000000000adef
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x001000000000adc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

