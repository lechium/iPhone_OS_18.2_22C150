//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXPickerContentViewController.h>

@class NSArray, PRXAction;

@interface ProxCardKitTestPickerViewController : PRXPickerContentViewController
{
    PRXAction *_nextAction;	// 8 = 0x8
    NSArray *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000110b9d
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x0010000000110b56
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x0010000000110af7
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0010000000110ab3
- (id)init;	// IMP=0x0010000000110858

@end
