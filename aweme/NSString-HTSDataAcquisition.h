//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (HTSDataAcquisition)
+ (id)hts_data_acquisition_hexStringToData:(id)arg1;
+ (id)hts_data_acquisition_dataToHexString:(id)arg1;
- (id)hts_data_acquisition_cfb8_decryptWithKey:(id)arg1 initializationVector:(id)arg2;
- (id)hts_data_acquisition_cfb8_encryptWithKey:(id)arg1 initializationVector:(id)arg2;
- (id)hts_data_acquisition_cfb_decryptWithKey:(id)arg1 initializationVector:(id)arg2;
- (id)hts_data_acquisition_cfb_encryptWithKey:(id)arg1 initializationVector:(id)arg2;
- (unsigned long long)hts_data_acquisition_crc32Code;
- (id)hts_data_acquisition_crc32String;
@end
