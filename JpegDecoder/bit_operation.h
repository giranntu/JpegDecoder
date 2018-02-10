#pragma once

#include <cstdint>
#include <vector>

// �����ģʽ��ȡ����
uint32_t GetBigEndianInteger(const uint8_t* data, int len);

// ��ȡ�� 4 λ
uint8_t High4bit(uint8_t byte);

// ��ȡ�� 4 λ
uint8_t Low4bit(uint8_t byte);

// ��ȡ�ֽ��ڵ�����ĳ��λ
uint8_t NBitsInOneByte(uint8_t byte, int start, int end);

// ��ȡ�Ե� start λ bit ��ʼ�� count �� bit��������Ϊ32λ�޷���������
uint32_t GetBitsToInteger(const uint8_t* p, int start, int count);

// ��ȡ�Ե� start λ bit ��ʼ�� count �� bit
std::vector<bool> GetBits(const uint8_t* p, int start, int count);

// ��ȡ�� n �� bit
bool GetBit(const uint8_t* p, int bit_id);

// �� size �� bit ȥ���� code
std::vector<bool> EncodeInNBits(uint16_t code, uint8_t size);

// �� bit ���ϻ�ȡһ���޷��� 16 λ��
uint16_t NBitsToInteger(const std::vector<bool>& bits);