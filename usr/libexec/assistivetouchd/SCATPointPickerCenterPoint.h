//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SCATPointPickerCenterPointDelegate;

@interface SCATPointPickerCenterPoint
{
    id <SCATPointPickerCenterPointDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d6ee8
@property(nonatomic) __weak id <SCATPointPickerCenterPointDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCenterPoint;	// IMP=0x00100000000d6eb3
- (struct CGPath *)scatPath;	// IMP=0x00100000000d6e60
- (struct CGRect)scatFrame;	// IMP=0x00100000000d6df8

@end

